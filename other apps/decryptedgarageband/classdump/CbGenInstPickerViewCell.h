//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor;

@interface CbGenInstPickerViewCell : UITableViewCell
{
    NSString *_customTitle;
    UIColor *_textColor;
    struct CGSize _phaseOffset;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) struct CGSize phaseOffset; // @synthesize phaseOffset=_phaseOffset;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

