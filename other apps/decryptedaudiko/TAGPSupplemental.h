//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBSettings, TAGPGaExperimentSupplemental, TAGPGaServerSideExperimentSupplemental, TAGPValue;

@interface TAGPSupplemental : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TAGPGaExperimentSupplemental *experimentSupplemental; // @dynamic experimentSupplemental;
@property(nonatomic) _Bool hasExperimentSupplemental; // @dynamic hasExperimentSupplemental;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasServerSideExperimentSupplemental; // @dynamic hasServerSideExperimentSupplemental;
@property(nonatomic) _Bool hasSettings; // @dynamic hasSettings;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TAGPGaServerSideExperimentSupplemental *serverSideExperimentSupplemental; // @dynamic serverSideExperimentSupplemental;
@property(retain, nonatomic) TAGPBSettings *settings; // @dynamic settings;
@property(retain, nonatomic) TAGPValue *value; // @dynamic value;

@end

