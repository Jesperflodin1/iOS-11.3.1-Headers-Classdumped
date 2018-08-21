/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSURL, NSSet, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	BOOL _supportsCalendarUserSearch;
	NSURL* _delegatePrincipalURL;
	NSSet* _calendarHomes;
	NSSet* _preferredUserAddresses;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropboxURL;
	NSURL* _notificationURL;
	NSURL* _updatedPrincipalURL;
	CalDAVServerVersion* _serverVersion;

}

@property (nonatomic,retain) NSURL * delegatePrincipalURL;                       //@synthesize delegatePrincipalURL=_delegatePrincipalURL - In the implementation block
@property (nonatomic,readonly) NSSet * calendarHomes;                            //@synthesize calendarHomes=_calendarHomes - In the implementation block
@property (nonatomic,readonly) NSSet * preferredUserAddresses;                   //@synthesize preferredUserAddresses=_preferredUserAddresses - In the implementation block
@property (nonatomic,readonly) NSURL * inboxURL;                                 //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * outboxURL;                                //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * dropboxURL;                               //@synthesize dropboxURL=_dropboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * notificationURL;                          //@synthesize notificationURL=_notificationURL - In the implementation block
@property (nonatomic,readonly) NSURL * updatedPrincipalURL;                      //@synthesize updatedPrincipalURL=_updatedPrincipalURL - In the implementation block
@property (nonatomic,readonly) CalDAVServerVersion * serverVersion;              //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,readonly) BOOL supportsCalendarUserSearch;                  //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
-(id)description;
-(void)startTaskGroup;
-(id)userAddresses;
-(id)_copyAccountPropertiesPropFindElements;
-(NSURL *)delegatePrincipalURL;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(NSSet *)preferredUserAddresses;
-(void)processPrincipalHeaders:(id)arg1 ;
-(id)homeSet;
-(BOOL)forceOptionsRequest;
-(void)setDelegatePrincipalURL:(NSURL *)arg1 ;
-(NSSet *)calendarHomes;
-(NSURL *)inboxURL;
-(NSURL *)outboxURL;
-(NSURL *)dropboxURL;
-(NSURL *)notificationURL;
-(NSURL *)updatedPrincipalURL;
-(BOOL)supportsCalendarUserSearch;
-(CalDAVServerVersion *)serverVersion;
@end

