//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CbHelpOverlayPageViewController, UIView;
@protocol CbHelpOverlayPageProvider;

@interface CbHelpOverlayMainViewController : UIViewController
{
    UIView *_parentView;
    UIView *_userInteractionView;
    CbHelpOverlayPageViewController *_topHelpController;
    int _tempHiddenCounter;
    _Bool _popoverOpenState;
    _Bool _currentExternalVisibleState;
    _Bool _currentInternalVisibleState;
    id <CbHelpOverlayPageProvider> _currentHelpProvider;
    id <CbHelpOverlayPageProvider> _additionalHelpProvider;
    id <CbHelpOverlayPageProvider> _trackPanelViewController;
    CbHelpOverlayPageViewController *_currentPageController;
}

@property(readonly, nonatomic) CbHelpOverlayPageViewController *currentPageController; // @synthesize currentPageController=_currentPageController;
@property(nonatomic) id <CbHelpOverlayPageProvider> trackPanelViewController; // @synthesize trackPanelViewController=_trackPanelViewController;
@property(nonatomic) id <CbHelpOverlayPageProvider> additionalHelpProvider; // @synthesize additionalHelpProvider=_additionalHelpProvider;
@property(nonatomic) id <CbHelpOverlayPageProvider> currentHelpProvider; // @synthesize currentHelpProvider=_currentHelpProvider;
- (void).cxx_destruct;
- (void)toggleHelpOverlay;
- (void)showHelpOverlay:(_Bool)arg1;
- (void)setTemporaryHidden:(_Bool)arg1;
- (void)_delayedTempHiddenUpdate;
- (void)_handlePopoverClosed:(id)arg1;
- (void)_handlePopoverOpened:(id)arg1;
- (void)updateHelpOverlayPageYOffsetWithDuration:(double)arg1 delay:(double)arg2;
- (void)_updateHelpOverlayPageYOffsetWithDuration:(double)arg1 delay:(double)arg2 changeInteractionItemsViewHierarchy:(_Bool)arg3;
- (void)updateSongPartsHelpBubbleVisibleAnimated:(_Bool)arg1;
- (void)setSongPartsHelpBubbleVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeCurrentPage;
- (void)update;
- (void)update:(_Bool)arg1;
- (void)resetCurrentHelpProviderAndUpdate;
- (void)resetCurrentHelpProviderWithoutUpdating;
- (void)abortAndCloseImmediatelyAndClearRefs;
- (id)_getPageNibNameFromMainID:(id)arg1 pageID:(id)arg2 assetSet:(id)arg3;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanUp;
- (void)loadView;
- (id)initWithHelpOverlayParentView:(id)arg1 userInteractionView:(id)arg2;

@end

