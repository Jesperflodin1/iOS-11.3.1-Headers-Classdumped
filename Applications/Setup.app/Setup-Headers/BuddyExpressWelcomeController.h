//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyChoiceController.h"

@class BFFStackedIconTextList, BYExpressSetupDataProvider, BuddyChoice;

@interface BuddyExpressWelcomeController : BuddyChoiceController
{
    BuddyChoice *_expressChoice;
    BuddyChoice *_customizeChoice;
    BFFStackedIconTextList *_featureList;
    BYExpressSetupDataProvider *_dataProvider;
    struct CGRect _correctedForScrollingFrame;
}

+ (id)cloudConfigSkipKey;
+ (_Bool)controllerNeedsToRun;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didSelectChoice:(id)arg1;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (void)buildFeatureListForFeatures:(id)arg1;
- (id)_localizedStringKeyForKey:(id)arg1 dataSourceType:(unsigned long long)arg2;
- (id)initWithExpressDataProvider:(id)arg1;

@end
