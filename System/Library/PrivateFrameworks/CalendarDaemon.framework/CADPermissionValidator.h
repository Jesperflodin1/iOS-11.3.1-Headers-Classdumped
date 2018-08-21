/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADPermissionValidator <NSObject>
@property (readonly) BOOL canModifySuggestedEventCalendar; 
@property (readonly) BOOL canMakeSpotlightChanges; 
@property (readonly) BOOL canModifyCalendarDatabase; 
@property (readonly) BOOL testingAccessLevelGranted; 
@property (readonly) BOOL internalAccessLevelGranted; 
@property (readonly) BOOL hasContactsUIEntitlement; 
@property (readonly) BOOL hasMigrationEntitlement; 
@property (readonly) BOOL hasSyncClientEntitlement; 
@property (readonly) BOOL hasCalendarToolEntitlement; 
@required
-(BOOL)testingAccessLevelGranted;
-(BOOL)hasMigrationEntitlement;
-(BOOL)hasSyncClientEntitlement;
-(BOOL)hasCalendarToolEntitlement;
-(BOOL)hasContactsUIEntitlement;
-(BOOL)canMakeSpotlightChanges;
-(BOOL)internalAccessLevelGranted;
-(BOOL)canModifySuggestedEventCalendar;
-(BOOL)canModifyCalendarDatabase;

@end
