//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString;

@interface ACPNumberFilter : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int comparisonType; // @dynamic comparisonType;
@property(retain, nonatomic) NSString *comparisonValue; // @dynamic comparisonValue;
@property(nonatomic) _Bool hasComparisonType; // @dynamic hasComparisonType;
@property(nonatomic) _Bool hasComparisonValue; // @dynamic hasComparisonValue;
@property(nonatomic) _Bool hasMatchAsFloat; // @dynamic hasMatchAsFloat;
@property(nonatomic) _Bool hasMaxComparisonValue; // @dynamic hasMaxComparisonValue;
@property(nonatomic) _Bool hasMinComparisonValue; // @dynamic hasMinComparisonValue;
@property(nonatomic) _Bool matchAsFloat; // @dynamic matchAsFloat;
@property(retain, nonatomic) NSString *maxComparisonValue; // @dynamic maxComparisonValue;
@property(retain, nonatomic) NSString *minComparisonValue; // @dynamic minComparisonValue;

@end

