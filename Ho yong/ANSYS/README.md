# Algorithm Miscellaneous Work

## 치구 모델 도면 
![KakaoTalk_20191119_132204615](https://user-images.githubusercontent.com/9815703/69913867-cadbe700-1480-11ea-8670-9207196d9b46.jpg)


## ANSYS 과제 치구 모델 구조 해석 
```
문제 정의 
치구 모델에 – y 방향으로 5kgf 와 x 방향으로 5kgf 응력을 주었을 때 치구 모델의 응력 분포(최대, 최소) 와 변형량 분포(최대, 최소) , 최대전달응력(최대, 최소)를 알아보기

치구 모델은 CATA 로 설계 후 .ex1 파일로 저장 ANSYS 프로그램을 이용한 해석 

물체 정보 
 E = 210GP -> 210000MPa 
 포아송비 -> 0.3

물체의 구속(경계)조건
  홀 3자유도 구속 
  벽면지지  

유한요소 조건
   Mash Defeature Size : Default
   Mash sizing Resolution = 6 설정

```


