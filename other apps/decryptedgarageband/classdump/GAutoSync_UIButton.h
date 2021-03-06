//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAutoSync.h"

@class UIButton;

@interface GAutoSync_UIButton : GAutoSync
{
    _Bool _inverted;
    _Bool _avoidUpdate;
    UIButton *_control;
    unsigned long long _behavior;
    long long _value;
    long long _valueOff;
    long long _valueOn;
}

+ (_Bool)acceptsControl:(id)arg1;
+ (id)autoSyncWithViewController:(id)arg1 control:(id)arg2 syncInfo:(id)arg3;
@property long long valueOn; // @synthesize valueOn=_valueOn;
@property long long valueOff; // @synthesize valueOff=_valueOff;
@property long long value; // @synthesize value=_value;
@property(nonatomic) _Bool avoidUpdate; // @synthesize avoidUpdate=_avoidUpdate;
@property(nonatomic) _Bool inverted; // @synthesize inverted=_inverted;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(retain) UIButton *control; // @synthesize control=_control;
- (void)parameterValueChanged:(long long)arg1 newValue:(void *)arg2;
- (void)parameterStateChanged:(long long)arg1 newState:(void *)arg2;
- (void)parameterInfoChanged:(long long)arg1 newInfo:(void *)arg2;
- (id)parameterIDs;
@property(readonly) long long parameterID;
- (id)initWithViewController:(id)arg1 control:(id)arg2 syncInfo:(id)arg3;
- (_Bool)hasControl:(id)arg1;
- (void)disconnectControl;
- (void)dealloc;
- (void)controlValueChanged:(id)arg1;
- (void)controlDidEndEditing:(id)arg1;
- (void)controlWillStartEditing:(id)arg1;

@end

