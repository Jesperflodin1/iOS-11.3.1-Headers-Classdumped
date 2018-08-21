/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableArray;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackLogMessage* _currentFeedbackLogMessage;
	double _currentDirectionsModeStartTime;
	NSMutableArray* _navigationModes;

}

@property (nonatomic,retain) GEODirectionsFeedbackLogMessage * currentFeedbackLogMessage;              //@synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
-(void)_updateFeedbackSessionWithResponseID:(id)arg1 ;
-(void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2 ;
-(void)setupFeedbackSessionWithResponseID:(id)arg1 ;
-(void)addGuidanceEventFeedback:(id)arg1 ;
-(void)addStepFeedback:(id)arg1 ;
-(void)addRouteID:(id)arg1 routeIndex:(unsigned)arg2 stepID:(unsigned)arg3 completeStep:(BOOL)arg4 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)setAudioFeedback:(GEONavigationAudioFeedback*)arg1 ;
-(void)changeNavigationType:(int)arg1 ;
-(void)endFeedbackSessionWithTracePath:(id)arg1 ;
-(GEODirectionsFeedbackLogMessage *)currentFeedbackLogMessage;
-(void)setCurrentFeedbackLogMessage:(GEODirectionsFeedbackLogMessage *)arg1 ;
-(GEODirectionsFeedback *)currentDirectionsFeedback;
-(void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
@end
