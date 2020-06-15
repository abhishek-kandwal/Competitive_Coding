package main
import (
"fmt"
"unicode"
)

type UserInput interface {
Add(rune)
GetValue() string
}

type NumericInput struct {
input string
}

func (n *NumericInput) GetValue() string {
return n.input

}

func (a *NumericInput) Add(val rune) {

isRune := unicode.IsDigit(val)
if isRune {
newVal := string(val)
var oldval string
oldval = a.input
if oldval != ""{
a.input = oldval + newVal
}else {
a.input = newVal
}

//oldVal := a.input

}

}

func main() {
var input UserInput = &NumericInput{}
input.Add('1')
input.Add('a')
input.Add('0')
fmt.Println(input.GetValue())
}

