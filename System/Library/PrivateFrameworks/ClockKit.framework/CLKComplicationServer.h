/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/CLKComplicationClient.h>

@protocol CLKComplicationDataSource;
@class NSString, NSXPCConnection, NSSet, NSArray, NSDate;

@interface CLKComplicationServer : NSObject <CLKComplicationClient> {

	NSString* _clientIdentifier;
	Class _dataSourceClass;
	NSXPCConnection* _serverConnection;
	id<CLKComplicationDataSource> _dataSource;
	NSSet* _activeComplications;
	struct {
		BOOL supportsGetTimeTravelDirections;
		BOOL supportsGetTimelineStartDate;
		BOOL supportsGetTimelineEndDate;
		BOOL supportsGetPrivacyBehavior;
		BOOL supportsGetTimelineAnimationBehavior;
		BOOL supportsExtendAfter;
		BOOL supportsExtendBefore;
		BOOL supportsGetRequestedUpdate;
		BOOL supportsNotifyRequestedUpdate;
		BOOL supportsNotifyBudgetExhausted;
		BOOL supportsGetPlaceholderTemplate;
		BOOL supportsGetLocalizableDescriptionProvider;
		BOOL supportsGetLocalizableSampleTemplate;
	}  _dataSourceFlags;

}

@property (nonatomic,readonly) NSArray * activeComplications; 
@property (nonatomic,readonly) NSDate * earliestTimeTravelDate; 
@property (nonatomic,readonly) NSDate * latestTimeTravelDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)setActiveComplications:(NSArray *)arg1 ;
-(NSArray *)activeComplications;
-(void)reloadTimelineForComplication:(id)arg1 ;
-(void)extendTimelineForComplication:(id)arg1 ;
-(void)getNextRequestedUpdateDateWithHandler:(/*^block*/id)arg1 ;
-(void)requestedUpdateDidBegin;
-(void)requestedUpdateBudgetExhausted;
-(void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_createConnection;
-(void)_checkinWithServer;
-(NSDate *)earliestTimeTravelDate;
-(NSDate *)latestTimeTravelDate;
-(void)_createDataSourceIfNecessary;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineStartDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineEndDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
@end
