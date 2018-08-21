/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSString, NCNotificationContent, NCNotificationOptions, NSArray;

@interface NCCoalescedNotification : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSMutableArray* _notificationRequests;
	NSString* _sectionIdentifier;
	NSString* _threadIdentifier;
	NCNotificationContent* _content;
	NCNotificationOptions* _options;

}

@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                 //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                  //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NCNotificationContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSArray * notificationRequests;               //@synthesize notificationRequests=_notificationRequests - In the implementation block
@property (nonatomic,readonly) NCNotificationOptions * options;                   //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NCNotificationContent *)content;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NCNotificationOptions *)options;
-(NSString *)threadIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCoalescedNotification:(id)arg1 ;
-(id)notificationRequestMatchingRequest:(id)arg1 ;
-(NSString *)sectionIdentifier;
-(id)initWithNotificationRequest:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)canCoalesceNotificationRequest:(id)arg1 ;
-(NSArray *)notificationRequests;
@end

