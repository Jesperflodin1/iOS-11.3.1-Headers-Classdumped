/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSSecureCoding>
+(id)optionsForFamily:(unsigned long long)arg1 fromOptionsDictionary:(id)arg2 ;
+(Class)optionsClassForFamily:(unsigned long long)arg1 ;
+(id)optionsFromOptionsDictionary:(id)arg1 ;
+(id)optionsClasses;
+(CGRect)santizedClippingRect:(CGRect)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

