/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo, NSMutableArray, GEOInstructionSet, NSString, GEOTimeCheckpoints;

@interface GEOStep : PBCodable <NSCopying> {

	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	unsigned _distance;
	GEONameInfo* _exitNumber;
	unsigned _expectedTime;
	NSMutableArray* _guidanceEvents;
	int _hintFirstAnnouncementZilchIndex;
	GEOInstructionSet* _instructionSet;
	NSString* _instructions;
	int _junctionType;
	int _maneuverEndBasicIndex;
	int _maneuverEndZilchIndex;
	NSMutableArray* _maneuverNames;
	int _maneuverStartZilchIndex;
	int _maneuverType;
	NSString* _notice;
	int _overrideDrivingSide;
	int _overrideTransportType;
	NSMutableArray* _signposts;
	unsigned _stepID;
	GEOTimeCheckpoints* _timeCheckpoints;
	BOOL _endsOnFwy;
	BOOL _maneuverLaneGuidanceSuppressed;
	BOOL _shouldChainManeuver;
	BOOL _stayOn;
	BOOL _toFreeway;
	BOOL _tollAhead;
	BOOL _tollPrior;
	SCD_Struct_GE84 _has;

}

@property (nonatomic,readonly) unsigned maneuverEndIndex; 
@property (nonatomic,readonly) unsigned maneuverStartIndex; 
@property (nonatomic,readonly) BOOL hasHintFirstAnnouncementIndex; 
@property (nonatomic,readonly) int hintFirstAnnouncementIndex; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                         //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverEndBasicIndex; 
@property (assign,nonatomic) int maneuverEndBasicIndex;                               //@synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverStartZilchIndex; 
@property (assign,nonatomic) int maneuverStartZilchIndex;                             //@synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverEndZilchIndex; 
@property (assign,nonatomic) int maneuverEndZilchIndex;                               //@synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                   //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                          //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType;                                        //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,retain) NSMutableArray * signposts;                              //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) BOOL hasHintFirstAnnouncementZilchIndex; 
@property (assign,nonatomic) int hintFirstAnnouncementZilchIndex;                     //@synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideTransportType; 
@property (assign,nonatomic) int overrideTransportType;                               //@synthesize overrideTransportType=_overrideTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideDrivingSide; 
@property (assign,nonatomic) int overrideDrivingSide;                                 //@synthesize overrideDrivingSide=_overrideDrivingSide - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber;                                //@synthesize exitNumber=_exitNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTollPrior; 
@property (assign,nonatomic) BOOL tollPrior;                                          //@synthesize tollPrior=_tollPrior - In the implementation block
@property (assign,nonatomic) BOOL hasTollAhead; 
@property (assign,nonatomic) BOOL tollAhead;                                          //@synthesize tollAhead=_tollAhead - In the implementation block
@property (assign,nonatomic) BOOL hasEndsOnFwy; 
@property (assign,nonatomic) BOOL endsOnFwy;                                          //@synthesize endsOnFwy=_endsOnFwy - In the implementation block
@property (assign,nonatomic) BOOL hasToFreeway; 
@property (assign,nonatomic) BOOL toFreeway;                                          //@synthesize toFreeway=_toFreeway - In the implementation block
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) NSString * instructions;                                 //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) BOOL hasNotice; 
@property (nonatomic,retain) NSString * notice;                                       //@synthesize notice=_notice - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;                    //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
@property (nonatomic,readonly) BOOL hasInstructionSet; 
@property (nonatomic,retain) GEOInstructionSet * instructionSet;                      //@synthesize instructionSet=_instructionSet - In the implementation block
@property (assign,nonatomic) BOOL hasShouldChainManeuver; 
@property (assign,nonatomic) BOOL shouldChainManeuver;                                //@synthesize shouldChainManeuver=_shouldChainManeuver - In the implementation block
@property (nonatomic,retain) NSMutableArray * guidanceEvents;                         //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (assign,nonatomic) BOOL hasStayOn; 
@property (assign,nonatomic) BOOL stayOn;                                             //@synthesize stayOn=_stayOn - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverLaneGuidanceSuppressed; 
@property (assign,nonatomic) BOOL maneuverLaneGuidanceSuppressed;                     //@synthesize maneuverLaneGuidanceSuppressed=_maneuverLaneGuidanceSuppressed - In the implementation block
+(Class)guidanceEventType;
+(Class)maneuverNameType;
+(Class)signpostType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)maneuverType;
-(NSMutableArray *)guidanceEvents;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(void)clearGuidanceEvents;
-(void)addGuidanceEvent:(id)arg1 ;
-(unsigned long long)guidanceEventsCount;
-(id)guidanceEventAtIndex:(unsigned long long)arg1 ;
-(unsigned)expectedTime;
-(void)setGuidanceEvents:(NSMutableArray *)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(int)maneuverEndBasicIndex;
-(void)setManeuverEndBasicIndex:(int)arg1 ;
-(void)setHasManeuverEndBasicIndex:(BOOL)arg1 ;
-(BOOL)hasManeuverEndBasicIndex;
-(int)maneuverStartZilchIndex;
-(void)setManeuverStartZilchIndex:(int)arg1 ;
-(void)setHasManeuverStartZilchIndex:(BOOL)arg1 ;
-(BOOL)hasManeuverStartZilchIndex;
-(int)maneuverEndZilchIndex;
-(void)setManeuverEndZilchIndex:(int)arg1 ;
-(void)setHasManeuverEndZilchIndex:(BOOL)arg1 ;
-(BOOL)hasManeuverEndZilchIndex;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(void)clearManeuverNames;
-(void)addManeuverName:(id)arg1 ;
-(unsigned long long)maneuverNamesCount;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(int)junctionType;
-(void)setJunctionType:(int)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(unsigned long long)junctionElementsCount;
-(GEOJunctionElement*)junctionElements;
-(void)clearJunctionElements;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
-(void)clearSignposts;
-(void)addSignpost:(id)arg1 ;
-(unsigned long long)signpostsCount;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(int)hintFirstAnnouncementZilchIndex;
-(void)setHintFirstAnnouncementZilchIndex:(int)arg1 ;
-(void)setHasHintFirstAnnouncementZilchIndex:(BOOL)arg1 ;
-(BOOL)hasHintFirstAnnouncementZilchIndex;
-(int)overrideTransportType;
-(void)setOverrideTransportType:(int)arg1 ;
-(void)setHasOverrideTransportType:(BOOL)arg1 ;
-(BOOL)hasOverrideTransportType;
-(id)overrideTransportTypeAsString:(int)arg1 ;
-(int)StringAsOverrideTransportType:(id)arg1 ;
-(int)overrideDrivingSide;
-(void)setOverrideDrivingSide:(int)arg1 ;
-(void)setHasOverrideDrivingSide:(BOOL)arg1 ;
-(BOOL)hasOverrideDrivingSide;
-(id)overrideDrivingSideAsString:(int)arg1 ;
-(int)StringAsOverrideDrivingSide:(id)arg1 ;
-(BOOL)hasExitNumber;
-(BOOL)tollPrior;
-(void)setTollPrior:(BOOL)arg1 ;
-(void)setHasTollPrior:(BOOL)arg1 ;
-(BOOL)hasTollPrior;
-(BOOL)tollAhead;
-(void)setTollAhead:(BOOL)arg1 ;
-(void)setHasTollAhead:(BOOL)arg1 ;
-(BOOL)hasTollAhead;
-(BOOL)endsOnFwy;
-(void)setEndsOnFwy:(BOOL)arg1 ;
-(void)setHasEndsOnFwy:(BOOL)arg1 ;
-(BOOL)hasEndsOnFwy;
-(BOOL)toFreeway;
-(void)setToFreeway:(BOOL)arg1 ;
-(void)setHasToFreeway:(BOOL)arg1 ;
-(BOOL)hasToFreeway;
-(BOOL)hasInstructions;
-(BOOL)hasNotice;
-(BOOL)hasTimeCheckpoints;
-(BOOL)hasInstructionSet;
-(void)setShouldChainManeuver:(BOOL)arg1 ;
-(void)setHasShouldChainManeuver:(BOOL)arg1 ;
-(BOOL)hasShouldChainManeuver;
-(BOOL)stayOn;
-(void)setStayOn:(BOOL)arg1 ;
-(void)setHasStayOn:(BOOL)arg1 ;
-(BOOL)hasStayOn;
-(BOOL)maneuverLaneGuidanceSuppressed;
-(void)setManeuverLaneGuidanceSuppressed:(BOOL)arg1 ;
-(void)setHasManeuverLaneGuidanceSuppressed:(BOOL)arg1 ;
-(BOOL)hasManeuverLaneGuidanceSuppressed;
-(unsigned)stepID;
-(NSMutableArray *)maneuverNames;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)signposts;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(GEONameInfo *)exitNumber;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(NSString *)instructions;
-(void)setInstructions:(NSString *)arg1 ;
-(NSString *)notice;
-(void)setNotice:(NSString *)arg1 ;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(GEOInstructionSet *)instructionSet;
-(void)setInstructionSet:(GEOInstructionSet *)arg1 ;
-(BOOL)shouldChainManeuver;
-(unsigned)maneuverEndIndex;
-(id)initialInstructionForSpoken;
-(id)prepareInstructionForSpoken;
-(id)executionInstructionsForSpoken;
-(id)firstNameInfo;
-(unsigned)maneuverStartIndex;
-(BOOL)hasHintFirstAnnouncementIndex;
-(int)hintFirstAnnouncementIndex;
-(id)intersectionNameInfo;
-(void)shieldInfo:(/*^block*/id)arg1 ;
-(BOOL)maneuverIsHighwayExit;
-(id)maneuverDescription;
-(id)distanceForListView;
-(id)instructionsForListView;
-(id)distanceForSignView;
-(id)mergeInstructionsForSignView;
-(id)continueInstructionsForSignView;
-(id)normalInstructionsForSignView;
-(id)proceedInstructionForSpoken;
-(id)continueInstructionForSpoken;
-(id)roadName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(id)dictionaryRepresentation;
@end

