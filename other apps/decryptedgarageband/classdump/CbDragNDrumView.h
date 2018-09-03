//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CbDragNDrumViewController, CbDragNDrumXYView, NSMutableDictionary;

@interface CbDragNDrumView : UIView
{
    CbDragNDrumViewController *drumMachineController;
    CbDragNDrumXYView *xyView;
    NSMutableDictionary *touchedLayers;
}

@property(nonatomic) CbDragNDrumXYView *xyView; // @synthesize xyView;
@property(nonatomic) CbDragNDrumViewController *drumMachineController; // @synthesize drumMachineController;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

