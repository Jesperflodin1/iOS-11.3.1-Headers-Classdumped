//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbBasicInputViewController.h"

@class ItemContainerView;

@interface SomeTestInputViewController : CbBasicInputViewController
{
    ItemContainerView *_containerView;
}

+ (Class)inputMethodSettingsClass;
@property(retain, nonatomic) ItemContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)dealloc;
- (void)cleanUp;
- (void)writeImportantUIStatesToSettings;
- (void)sendNoteOff:(int)arg1 toInstrumentID:(int)arg2 mb3:(unsigned char)arg3;
- (void)sendNoteOn:(int)arg1 toInstrumentID:(int)arg2 withVelocity:(unsigned char)arg3 mb3:(unsigned char)arg4;
- (void)controllerDidClose;
- (void)controllerWillClose;
- (void)controllerDidOpen;
- (void)controllerWillOpen;
- (void)viewDidLoad;
- (id)nibName;
- (id)initWithDocument:(id)arg1 andControllerID:(id)arg2 track:(id)arg3;

@end

