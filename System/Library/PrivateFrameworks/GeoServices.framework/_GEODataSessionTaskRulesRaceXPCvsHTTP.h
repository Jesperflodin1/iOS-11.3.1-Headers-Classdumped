/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEODataSessionTaskRulesHelper.h>

@interface _GEODataSessionTaskRulesRaceXPCvsHTTP : _GEODataSessionTaskRulesHelper {

	double _xpcTaskStartTime;
	BOOL _xpcTaskDidComplete;
	int _requestKind;

}
-(BOOL)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3 ;
-(void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2 ;
-(BOOL)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3 ;
@end

