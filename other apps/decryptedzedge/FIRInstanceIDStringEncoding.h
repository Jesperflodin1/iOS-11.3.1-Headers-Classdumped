//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FIRInstanceIDStringEncoding : NSObject
{
    NSData *charMapData_;
    char *charMap_;
    int reverseCharMap_[128];
    int shift_;
    int mask_;
    _Bool doPad_;
    BOOL paddingChar_;
    int padLen_;
}

+ (id)stringEncodingWithString:(id)arg1;
+ (id)rfc4648Base64WebsafeStringEncoding;
- (void).cxx_destruct;
- (id)decode:(id)arg1;
- (id)encode:(id)arg1;
- (void)setPaddingChar:(BOOL)arg1;
- (void)setDoPad:(_Bool)arg1;
- (_Bool)doPad;
- (id)description;
- (id)initWithString:(id)arg1;

@end

