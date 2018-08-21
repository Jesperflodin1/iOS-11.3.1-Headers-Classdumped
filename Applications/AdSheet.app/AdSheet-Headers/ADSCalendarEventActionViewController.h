//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSActionViewController.h"

#import "EKEventEditViewDelegate.h"
#import "SBSHardwareButtonEventConsuming.h"

@class EKEvent, EKEventEditViewController, NSString;

@interface ADSCalendarEventActionViewController : ADSActionViewController <EKEventEditViewDelegate, SBSHardwareButtonEventConsuming>
{
    EKEvent *_calendarEvent;
    EKEventEditViewController *_eventKitEditViewController;
    id <BSInvalidatable> _homeButtonAssertion;
}

@property(retain, nonatomic) id <BSInvalidatable> homeButtonAssertion; // @synthesize homeButtonAssertion=_homeButtonAssertion;
@property(retain, nonatomic) EKEventEditViewController *eventKitEditViewController; // @synthesize eventKitEditViewController=_eventKitEditViewController;
@property(retain, nonatomic) EKEvent *calendarEvent; // @synthesize calendarEvent=_calendarEvent;
- (void)_stopConsumingHardwarePresses;
- (void)_beginConsumingHardwarePresses;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (_Bool)_shouldConsumeHardwarePresses;
- (void)clientApplicationDidEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didSetAdSpaceController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
