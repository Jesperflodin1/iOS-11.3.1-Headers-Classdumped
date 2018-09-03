//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface ABButton : UIButton
{
    id target;
    id context;
    SEL selector;
    double _iconScale;
}

@property double iconScale; // @synthesize iconScale=_iconScale;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(retain, nonatomic) id context; // @synthesize context;
@property(nonatomic) id target; // @synthesize target;
- (void).cxx_destruct;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2 context:(id)arg3;
- (void)setTarget:(id)arg1 selector:(SEL)arg2 context:(id)arg3 forControlEvents:(unsigned long long)arg4;
- (void)dealloc;
- (void)triggerAction;

@end
