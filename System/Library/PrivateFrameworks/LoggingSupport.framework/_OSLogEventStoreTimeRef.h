/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _OSLogEventStoreTimeRef : NSObject {

	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (nonatomic,readonly) const char* UUID; 
@property (nonatomic,readonly) unsigned long long continuousTime;              //@synthesize ct=_ct - In the implementation block
+(id)timeRef;
-(id)initWithDictionary:(id)arg1 ;
-(const char*)UUID;
-(unsigned long long)continuousTime;
-(id)initWithUUID:(unsigned char)arg1 continuous:(unsigned long long)arg2 ;
@end

