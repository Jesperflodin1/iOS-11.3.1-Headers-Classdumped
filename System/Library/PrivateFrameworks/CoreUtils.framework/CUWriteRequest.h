/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSError, NSArray;

@interface CUWriteRequest : NSObject {

	NSError* _error;
	iovec* _iov[16];
	iovec* _iop;
	int _ion;
	unsigned long long _offset;
	BOOL _endOfData;
	iovec* _bytesIOArray;
	unsigned long long _bytesIOCount;
	unsigned long long _bytesIOMaxCount;
	/*^block*/id _completion;
	NSArray* _dataArray;

}

@property (nonatomic,readonly) iovec* bytesIOArray;                             //@synthesize bytesIOArray=_bytesIOArray - In the implementation block
@property (assign,nonatomic) unsigned long long bytesIOCount;                   //@synthesize bytesIOCount=_bytesIOCount - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesIOMaxCount;              //@synthesize bytesIOMaxCount=_bytesIOMaxCount - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;                               //@synthesize dataArray=_dataArray - In the implementation block
@property (assign,nonatomic) BOOL endOfData;                                    //@synthesize endOfData=_endOfData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(NSArray *)dataArray;
-(id)init;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(iovec*)bytesIOArray;
-(unsigned long long)bytesIOCount;
-(void)setBytesIOCount:(unsigned long long)arg1 ;
-(unsigned long long)bytesIOMaxCount;
-(void)setDataArray:(NSArray *)arg1 ;
-(BOOL)endOfData;
-(void)setEndOfData:(BOOL)arg1 ;
-(NSError *)error;
@end

