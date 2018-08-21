/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation {

	HMDBackingStoreTransactionBlock* _transaction;
	long long _pushFlags;

}

@property (nonatomic,retain) HMDBackingStoreTransactionBlock * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) long long pushFlags;                                        //@synthesize pushFlags=_pushFlags - In the implementation block
-(HMDBackingStoreTransactionBlock *)transaction;
-(void)setTransaction:(HMDBackingStoreTransactionBlock *)arg1 ;
-(id)mainReturningError;
-(id)initWithTransaction:(id)arg1 ;
-(long long)pushFlags;
-(void)setPushFlags:(long long)arg1 ;
@end
