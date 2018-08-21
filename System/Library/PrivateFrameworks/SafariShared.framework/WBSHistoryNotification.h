/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WBSHistoryNotification : NSObject <NSSecureCoding> {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
@end
