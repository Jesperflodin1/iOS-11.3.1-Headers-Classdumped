/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface PKUniqueAddressField : NSObject {

	NSString* _key;
	long long _index;
	NSError* _error;
	NSString* _invalidText;

}

@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * invalidText;              //@synthesize invalidText=_invalidText - In the implementation block
-(NSString *)key;
-(void)setIndex:(long long)arg1 ;
-(long long)index;
-(void)setKey:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setInvalidText:(NSString *)arg1 ;
-(NSString *)invalidText;
@end
