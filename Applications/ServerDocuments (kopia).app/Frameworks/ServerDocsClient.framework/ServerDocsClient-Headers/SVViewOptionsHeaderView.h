//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSLayoutConstraint, UIButton, UISegmentedControl;

@interface SVViewOptionsHeaderView : UIControl
{
    UISegmentedControl *_sortingOptionsSegmentedControl;
    UIButton *_listViewEnabledButton;
    id <SVViewOptionsHeaderViewDelegate> _delegate;
    NSLayoutConstraint *_segmentedControlCenterXConstraint;
    NSLayoutConstraint *_segmentedControlLeadingSpaceConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *segmentedControlLeadingSpaceConstraint; // @synthesize segmentedControlLeadingSpaceConstraint=_segmentedControlLeadingSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *segmentedControlCenterXConstraint; // @synthesize segmentedControlCenterXConstraint=_segmentedControlCenterXConstraint;
@property(nonatomic) __weak id <SVViewOptionsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *listViewEnabledButton; // @synthesize listViewEnabledButton=_listViewEnabledButton;
@property(nonatomic) __weak UISegmentedControl *sortingOptionsSegmentedControl; // @synthesize sortingOptionsSegmentedControl=_sortingOptionsSegmentedControl;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)sortOrderChanged:(id)arg1;
- (void)toggleListView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;

@end

