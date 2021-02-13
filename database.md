# ** 데이터베이스 정리!**

## 데이터베이스 이름: donghyun

### 테이블 이름: dong

> + 데이터베이스 생성
> > CREATE DATABASE 'donghyun';


> + 데이터베이스 제거
> > DROP DATABASE 'donghyun';

> + 등록되어 있는 데이터베이스 보기
> > SHOW DATABASES;

> + 데이터베이스 사용
> > USE 'donghyun';

> + 테이블 생성
> > create table dong (

	id int(11) NOT NULL AUTO_INCREMENT,  //AUTO_INCREMENT < id 수치 자동증가
	title varchar(30) NOT NULL,
	created DATETIME NOT NULL, //후에 INSERT INTO 에서 NOW() 하면 현재시간이 저장됨.
	primary key(id));


> + 생성해놓은 테이블에서 속성추가
> > alter table donghyun
	add (description) text NULL;


> + 컬럼 이름 바꾸기
> > alter table dong CHANGE id 아이디 INT NOT NULL AUTO_INCREMENT;


> + 레코드 추가
> > INSERT INTO dong(아이디, title, created, description)
	VALUES ('1', '영화', NOW(), '개봉안함');


> + 테이블 보기
> > SELECT *
	FROM dong;  -> dong에 등록되어 있는 테이블 전체 내용이 보여짐.


> + 원하는 속성만 보고 싶을 떄(ex. id, title)
> > SELECT id, title
	FROM dong
	WHERE title = "영화"
	ORDER BY id DESC
	LIMIT 2;                 -> id 2까지만 내림차순으로 정렬 및 title이 영화인것만



> + 기존에 있던 테이블 수정하기
> > UPDATE dong
	SET title = "무비"
	WHERE id = 1;


> + 테이블명 변경하기
> > RENAME TABLE dong To DDONG;

> + 조인
> > SELECT *
	FROM dong LEFT JOIN DDONG ON id = dong id;     //dong 테이블과 DDONG 테이블을 합쳐서 보여주는데 dong의 id와 DDONG id가 같음.






