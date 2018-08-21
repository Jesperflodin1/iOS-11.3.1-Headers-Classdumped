/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveML/ProactiveML-Structs.h>
@class PMLTrainingStore, NSString;

@interface PMLPreinstalledPlansManager : NSObject {

	PMLTrainingStore* _store;
	NSString* _plansDirectory;

}
+(id)preinstalledPlansDirectory;
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(id)initWithStore:(id)arg1 plansDirectory:(id)arg2 ;
-(BOOL)hasAlreadyRunPlan:(NSString*)arg1 ;
-(BOOL)availableSessionsWithDescriptor:(id)arg1 satisfyRequirements:(id)arg2 ;
-(id)preinstalledPlanByFilename:(id)arg1 ;
-(void)enumeratePreinstalledPlansWithBlock:(/*^block*/id)arg1 ;
-(void)runWhile:(/*^block*/id)arg1 ;
-(void)runWhileDoneForTesting;
@end
