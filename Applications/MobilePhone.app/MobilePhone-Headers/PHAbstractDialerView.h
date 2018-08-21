//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DialerLCDFieldDelegate.h"

@class NSString, UIControl, UIView<DialerLCDFieldProtocol>, UIView<TPDialerKeypadProtocol>;

@interface PHAbstractDialerView : UIView <DialerLCDFieldDelegate>
{
    _Bool _inCallMode;
    UIView<DialerLCDFieldProtocol> *_lcdView;
    UIView<TPDialerKeypadProtocol> *_phonePadView;
    id <DialerViewDelegate> _delegate;
    UIControl *_addContactButton;
    UIControl *_callButton;
    UIControl *_deleteButton;
}

@property(retain, nonatomic) UIControl *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIControl *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) UIControl *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(nonatomic) id <DialerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView<TPDialerKeypadProtocol> *phonePadView; // @synthesize phonePadView=_phonePadView;
@property(retain, nonatomic) UIView<DialerLCDFieldProtocol> *lcdView; // @synthesize lcdView=_lcdView;
@property(nonatomic) _Bool inCallMode; // @synthesize inCallMode=_inCallMode;
- (void).cxx_destruct;
- (void)dialerField:(id)arg1 stringWasPasted:(id)arg2;
- (void)dialerLCDFieldTextDidChange:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
