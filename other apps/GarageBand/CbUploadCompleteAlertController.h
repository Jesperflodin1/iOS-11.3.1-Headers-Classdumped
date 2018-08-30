//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class CbExporterPublisher, NSString;

@interface CbUploadCompleteAlertController : UIAlertController <MFMailComposeViewControllerDelegate>
{
    CbExporterPublisher *_publisher;
    long long _viewButtonIndex;
    long long _tellButtonIndex;
}

+ (id)alertControllerWithPublisher:(id)arg1 title:(id)arg2 viewButtonTitle:(id)arg3;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
