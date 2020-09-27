# ✔C Programming✔

softwareProject


### 13번 동적 메모리 할당
 * void *calloc(size_t nmemb, size_t size); 
 calloc() allocates memory for an array of nmemb elements of size bytes each and returns a pointer to
 the allo- cated memory. The memory is set to zero. 

 * void *malloc(size_t size); 
 malloc() allocates size bytes and returns a pointer to the allocated memory. The memory is not cleared.

 * void free(void *ptr); 
 free() frees the memory space pointed to by ptr, which must have been returned by a previous call to malloc(), calloc() or realloc(). Otherwise, or if free(ptr) has already been called before, undefined behaviour occurs. If ptr is NULL, no operation is performed. 

 * void *realloc(void *ptr, size_t size);
 realloc() changes the size of the memory block pointed to by ptr to size bytes. The contents will be unchanged to the minimum of the old and new sizes; newly allocated  memory will be uninitialized. If ptr is NULL, the call is equivalent to malloc(size); if size is equal to zero, the call is equivalent to free(ptr). Unless ptr is NULL, it must have been returned by an earlier call to malloc(), calloc() or realloc().

### 24번 Greedy Algorithm
그리디 알고리즘: 당장 눈 앞에 뵈는 최적의 상황을 쫓는 알고리즘, 단순한 형태이다.
- 장점: 최적의 해에 근사한 값을 빠르게 구할 수 있다.
- 정렬기법이 함께 이용
