//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIColor, UIView;

@protocol GAmpDesignerChessboardBasicViewControllerDelegate
- (void)layoutAmpView:(UIView *)arg1;
- (void)setNavBarAmbientParamEditModeColor:(UIColor *)arg1;
- (void)setNavBarAmbientColor:(UIColor *)arg1;
- (void)setParamEditMode:(_Bool)arg1;
- (_Bool)isParamEditMode;
- (struct MADSPUserPlugIn *)guitarAmpPlugIn;
- (unsigned long long)currentAmpType;

@optional
- (_Bool)isRecording;
@end

