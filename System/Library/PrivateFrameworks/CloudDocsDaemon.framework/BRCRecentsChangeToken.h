/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCRecentsChangeToken : NSObject {

	unsigned long long _notifRank;
	unsigned long long _databaseID;

}

@property (assign,nonatomic) unsigned long long notifRank;               //@synthesize notifRank=_notifRank - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)changeTokenFromData:(id)arg1 ;
-(id)description;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)setNotifRank:(unsigned long long)arg1 ;
-(id)toData;
-(unsigned long long)notifRank;
@end

