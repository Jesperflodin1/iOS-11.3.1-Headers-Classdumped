//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CbPachinkoMB3Helper : NSObject
{
}

+ (unsigned char)getAdjustedMB3WithArticulation:(long long)arg1 forCurrentMB3Value:(unsigned char)arg2;
+ (id)articulationNameFromMB3:(unsigned char)arg1;
+ (id)localizedArticulationNameForArtculationName:(id)arg1;
+ (id)availableMb3ArticulationNames;
+ (unsigned char)articulationAgnosticMB3ForMB3:(unsigned char)arg1;
+ (int)stringIndexFromMB3:(unsigned char)arg1;
+ (long long)articulationFromMB3:(unsigned char)arg1;
+ (unsigned char)mb3ForArticulation:(long long)arg1 stringIndex:(int)arg2;

@end
