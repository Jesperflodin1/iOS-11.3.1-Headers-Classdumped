//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class ACPNumberFilter, ACPStringFilter, NSString;

@interface ACPFilter : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool complement; // @dynamic complement;
@property(nonatomic) _Bool hasComplement; // @dynamic hasComplement;
@property(nonatomic) _Bool hasNumberFilter; // @dynamic hasNumberFilter;
@property(nonatomic) _Bool hasParamName; // @dynamic hasParamName;
@property(nonatomic) _Bool hasStringFilter; // @dynamic hasStringFilter;
@property(retain, nonatomic) ACPNumberFilter *numberFilter; // @dynamic numberFilter;
@property(retain, nonatomic) NSString *paramName; // @dynamic paramName;
@property(retain, nonatomic) ACPStringFilter *stringFilter; // @dynamic stringFilter;

@end

