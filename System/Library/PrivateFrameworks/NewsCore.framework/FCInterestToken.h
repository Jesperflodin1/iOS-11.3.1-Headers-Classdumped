/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCInterestToken : NSObject {

	/*^block*/id _removeInterestBlock;

}

@property (nonatomic,copy) id removeInterestBlock;              //@synthesize removeInterestBlock=_removeInterestBlock - In the implementation block
+(id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
+(id)interestTokenWithRemoveInterestBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
-(id)removeInterestBlock;
-(void)setRemoveInterestBlock:(id)arg1 ;
@end

