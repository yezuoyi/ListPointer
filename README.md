# ListPointer
ListPointer
我做个总结 顺便回答一下你的疑问
在main函数开始 你的head指针没有初始化是未定义值 而createLink函数中动态申请了空间，并让head指针指向了这片空间，从而改变了head指针的值，故这里的参数必须为head的地址即二级指针，这样才能对head值进行修改；
对于addLink函数，由于head在createLink的过程中已经指向了第一个结点，此时的添加操作都是在已有的结点之后，且并未修改head的指向，故参数只需为head本身即一级指针。
7楼的意思是说addLink函数如果每次都是在链表的头部插入一个结点，则会使得head指向一个新的结点，而不是在已有结点之后添加结点，楼主的理解有误。
综上，只要是要修改head指针必须传递head的地址，否则传递head值即可。这与普通变量类似，当需要修改普通变量的值，需传递其地址，否则传递普通变量的值即可。