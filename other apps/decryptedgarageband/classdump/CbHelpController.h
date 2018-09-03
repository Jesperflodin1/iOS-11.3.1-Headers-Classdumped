//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HLPHelpViewControllerDelegateSPI-Protocol.h"

@class NSArray, NSString;

@interface CbHelpController : NSObject <HLPHelpViewControllerDelegateSPI>
{
    NSArray *_allowedInterfaceOrientations;
    _Bool _debug;
    _Bool _showCoachingTipsAfterClosing;
}

+ (void)removeHelpLibraryCache;
+ (id)sharedController;
@property(retain, nonatomic) NSArray *allowedInterfaceOrientations; // @synthesize allowedInterfaceOrientations=_allowedInterfaceOrientations;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
- (void)helpViewControllerDoneButtonTapped:(id)arg1;
- (_Bool)showHelpPageWithAPDID:(id)arg1 inViewController:(id)arg2 showCoachingTipsAfterClosing:(_Bool)arg3;
- (_Bool)showMobileGuideInViewController:(id)arg1;
- (void)setupContentViewController:(id)arg1;
- (_Bool)initializeMobileGuide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

