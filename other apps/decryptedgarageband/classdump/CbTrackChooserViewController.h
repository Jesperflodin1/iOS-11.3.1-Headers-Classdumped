//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class CbSongMainViewController, DfDocument;

@interface CbTrackChooserViewController : UITableViewController
{
    DfDocument *_document;
    CbSongMainViewController *_mainViewController;
}

+ (void)dismissPopover;
+ (void)showTrackChooserPopoverForRect:(struct CGRect)arg1 inView:(id)arg2 forDocument:(id)arg3 mainViewController:(id)arg4;
+ (id)viewControllerToUseForPresentation;
+ (_Bool)isOpen;
@property __weak CbSongMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property __weak DfDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (struct CGSize)sizeForPopover;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)doFreezeAndReenableUserInteraction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

