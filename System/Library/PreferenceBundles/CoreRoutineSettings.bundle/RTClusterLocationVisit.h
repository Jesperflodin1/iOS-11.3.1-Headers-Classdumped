/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDate, NSString, RTClusterLocation;

@interface RTClusterLocationVisit : NSObject {

	NSUUID* _identifier;
	NSDate* _entryDate;
	NSDate* _exitDate;
	NSString* _incomingRouteName;
	RTClusterLocation* _clusterLocation;

}

@property (nonatomic,copy) NSString * incomingRouteName;                              //@synthesize incomingRouteName=_incomingRouteName - In the implementation block
@property (assign,nonatomic,__weak) RTClusterLocation * clusterLocation;              //@synthesize clusterLocation=_clusterLocation - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * entryDate;                                    //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,readonly) NSDate * exitDate;                                     //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTimeDetail; 
@property (nonatomic,copy,readonly) NSString * localizedDateDetail; 
-(RTClusterLocation *)clusterLocation;
-(NSString *)incomingRouteName;
-(NSString *)localizedTimeDetail;
-(NSString *)localizedDateDetail;
-(id)initWithLocationOfInterestVisit:(id)arg1 ;
-(void)setIncomingRouteName:(NSString *)arg1 ;
-(void)setClusterLocation:(RTClusterLocation *)arg1 ;
-(BOOL)_enteredAndExitedOnSameDay;
-(id)initWithIdentifier:(id)arg1 entryDate:(id)arg2 exitDate:(id)arg3 ;
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)exitDate;
-(NSDate *)entryDate;
@end

