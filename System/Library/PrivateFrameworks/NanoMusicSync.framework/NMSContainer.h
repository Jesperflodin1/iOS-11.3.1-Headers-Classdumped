/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface NMSContainer : NSObject {

	NSString* _name;
	NSNumber* _persistentID;
	unsigned long long _type;
	NSNumber* _addedDate;
	NSNumber* _playedDate;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * addedDate;                   //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,retain) NSNumber * playedDate;                  //@synthesize playedDate=_playedDate - In the implementation block
-(NSString *)name;
-(unsigned long long)type;
-(NSNumber *)addedDate;
-(void)setAddedDate:(NSNumber *)arg1 ;
-(NSNumber *)persistentID;
-(id)initWithPersistentID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 ;
-(NSNumber *)playedDate;
-(void)setPlayedDate:(NSNumber *)arg1 ;
@end
