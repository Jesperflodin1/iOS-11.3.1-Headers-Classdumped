//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbInputMethodSettings.h"

@class NSArray, NSDictionary;

@interface CbStepSequencerInputMethodSettings : CbInputMethodSettings
{
}

+ (id)_globalPreferencesBasedValueKeys;
+ (id)_allowedKeys;
+ (_Bool)settingsForTrackHasUserData:(id)arg1;
- (_Bool)allowNilObjectsForKeys;
- (id)_defaultValueForKey:(id)arg1;
@property(nonatomic) _Bool autoplayActionsEnabled;
@property(nonatomic) unsigned long long secondaryEditMode;
@property(nonatomic, getter=isRowHeaderExpanded) _Bool rowHeaderExpanded;
@property(retain, nonatomic) NSDictionary *libraryData;
@property(nonatomic) double zoomScale;
@property(nonatomic) struct CGPoint rowsContentOffset;
@property(nonatomic) unsigned long long stepViewPage;
@property(nonatomic) NSArray *clipIDs;
@property(nonatomic) _Bool hasUserData;
@property(nonatomic) NSDictionary *sequenceData;
@property(nonatomic) unsigned long long editMode;

@end

