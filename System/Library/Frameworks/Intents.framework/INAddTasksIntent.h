/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAddTasksIntentExport.h>

@class INTaskList, NSArray, INSpatialEventTrigger, INTemporalEventTrigger, NSString;

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (nonatomic,copy,readonly) INTaskList * targetTaskList; 
@property (nonatomic,copy,readonly) NSArray * taskTitles; 
@property (nonatomic,copy,readonly) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)domain;
-(void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1 ;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setTaskTitles:(NSArray *)arg1 ;
-(NSArray *)taskTitles;
-(void)setTargetTaskList:(INTaskList *)arg1 ;
-(INTaskList *)targetTaskList;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
-(void)setVerb:(id)arg1 ;
-(id)verb;
-(id)_metadata;
-(void)setDomain:(id)arg1 ;
@end

