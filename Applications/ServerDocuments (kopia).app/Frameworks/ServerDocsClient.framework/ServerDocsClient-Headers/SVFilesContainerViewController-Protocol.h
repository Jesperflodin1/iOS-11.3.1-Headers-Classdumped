//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SVMetadataItem;

@protocol SVFilesContainerViewController <NSObject>
@property(readonly, nonatomic) _Bool showDisclosureIndicatorForFiles;
@property(readonly, nonatomic) NSArray *validTypes;
@property(readonly, nonatomic) _Bool showViewOptionsHeaderView;
- (void)updateViewForSizeChangeWithCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (void)hideViewOptionsHeaderIfNecessary;
- (void)snapToShowOrHideHeaderForContentOffset:(double)arg1 animated:(_Bool)arg2;
- (void)adjustContentInset;
- (void)didSelectItem:(SVMetadataItem *)arg1;
@end
