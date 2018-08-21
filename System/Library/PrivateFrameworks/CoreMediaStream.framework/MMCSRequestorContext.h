/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MMCSEngine;

@interface MMCSRequestorContext : NSObject {

	int _type;
	MMCSEngine* _engine;
	char** _signatures;
	unsigned long long _count;
	unsigned long long* _itemIDs;
	unsigned* _itemFlags;
	char** _authTokens;

}

@property (assign,nonatomic,__weak) MMCSEngine * engine;               //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long* itemIDs;              //@synthesize itemIDs=_itemIDs - In the implementation block
@property (assign,nonatomic) unsigned* itemFlags;                      //@synthesize itemFlags=_itemFlags - In the implementation block
@property (assign,nonatomic) char** signatures;                        //@synthesize signatures=_signatures - In the implementation block
@property (assign,nonatomic) char** authTokens;                        //@synthesize authTokens=_authTokens - In the implementation block
+(id)contextWithEngine:(id)arg1 type:(int)arg2 ;
-(char**)signatures;
-(unsigned long long)count;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long*)itemIDs;
-(void)setItemIDs:(unsigned long long*)arg1 ;
-(unsigned*)itemFlags;
-(void)setItemFlags:(unsigned*)arg1 ;
-(id)initWithEngine:(id)arg1 type:(int)arg2 ;
-(void)setSignatures:(char**)arg1 ;
-(char**)authTokens;
-(void)setAuthTokens:(char**)arg1 ;
-(MMCSEngine *)engine;
-(void)setEngine:(MMCSEngine *)arg1 ;
@end

