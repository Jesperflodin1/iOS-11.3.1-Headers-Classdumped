/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECMailbox <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@required
-(NSString *)name;
-(long long)type;
-(NSString *)persistentID;

@end
