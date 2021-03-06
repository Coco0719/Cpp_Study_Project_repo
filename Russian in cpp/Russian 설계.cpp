/*

아래 게임의 여러 함수들이 배열을 이용하면 더 쉽게 구현할 수 있습니다.

그러니 이 게임은 배열 사용 없이 구현했습니다.

*/

/*

게임 규칙

1. 사용자 2~5명 설정
--> scanf 함수로 정하고, 받아온 숫자를 최대 인원으로 정한다!

2. 6연발 권총 기준, 총알 장전 횟수 1~5회
--> 변수에 랜덤함수로 받아온 값 저장

3. 시작할 사람을 랜덤으로 뽑고, 그 다음부터 순서대로 게임 진행
--> 뽑힌 사람을 기준으로 정하는 번호를 정하고, 순서대로 진행, 만약 최대 인원을 넘으면 첫 번째 순서의 사람으로 넘어간다

4. 한 명이 죽으면 게임 종료, 죽은 사람의 번호를 반환한다. 메인 함수에선 죽은 사람의 번호 출력!!
--> 랜덤 함수로 누가 죽나 확인 후, 그것을 반환, 메인 함수에선 반호나 받은 사람의 번호 출력!

*/

/*

게임 설계(순서)

1. 초반 출력 및 입력

================= [러시안 룰렛] =================

플레이어의 수를 선택해주세요 [2 ~ 5명] >>

총알의 수를 입력해주세요 [1 ~ 5발] >>

시작 플레이어를 설정해주세요 [2 ~ 선택한 인원] >>

=================== [게임 시작] ===================

2. 본격적인 게임 진행

"%d플레이어가 %d플레이어를 조준하고 있습니다."
(저격당하는 플레이어도 랜덤 함수로 뽑습니다, 중복해서 뽑힐 수 있습니다)

3 2 1 발사!!(이스케이프 시퀀스 소리)

"%d 플레이어가 살았습니다!" or "%d 플레이어가 죽었습니다"

(1) 플레이어가 살았을 경우, 다음 플레이어 순서로 넘어가며, 다시 저격당하는 플레이어도 랜덤 함수로 뽑는다!

(2) 플레이어가 죽었을 경우 --> 메인 함수로 죽은 플레이어 번호 반환, 다음 문구 출력 >> "게임 결과 : 생존 플레이어 : 1, 2, 3, 4 / 사망 플레이어 : 5"
*/