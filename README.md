# ctf_guide

간단한 버퍼오버플로우 공격을 구현하였다.

크기를 제한해서 받지 않는 scanf는 오버플로우의 취약점이 있기에 사용을 지양하는 함수이다.

단, 여기서는 공격을 재현하기 위해 scanf를 사용하고 리눅스 내의 메모리 보호기법을 모두 해제하였다.(No PIE, No Canary, NX disabled ...)

스택 영역에서 overflow를 이용해 scanf의 ret주소에 flag 파일을 읽고 출력하는 함수의 주소를 덮어씀으로써 권한이 없는 flag파일을 읽을 수 있도록 하는 exploit을 구축하였다.
