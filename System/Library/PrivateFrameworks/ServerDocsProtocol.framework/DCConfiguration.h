/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface DCConfiguration : NSObject {

	NSDate* _fetchDate;
	NSDate* _expiry;
	BOOL _hasValidSignature;

}

@property (nonatomic,copy) NSDate * expiry;                       //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,copy) NSDate * fetchDate;                    //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) BOOL hasValidSignature;              //@synthesize hasValidSignature=_hasValidSignature - In the implementation block
-(NSDate *)fetchDate;
-(void)setFetchDate:(NSDate *)arg1 ;
-(void)setExpiry:(NSDate *)arg1 ;
-(NSDate *)expiry;
-(BOOL)hasValidSignature;
-(void)setHasValidSignature:(BOOL)arg1 ;
@end

