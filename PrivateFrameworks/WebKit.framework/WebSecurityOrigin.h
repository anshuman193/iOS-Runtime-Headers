/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebSecurityOriginPrivate;



@interface WebSecurityOrigin : NSObject 
{
    WebSecurityOriginPrivate *_private;
}


- (id)initWithURL:(id)arg1;
- (id)protocol;
- (id)host;
- (id)toString;
- (id)domain;
- (unsigned short)port;
- (unsigned long long)usage;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { NSInteger x1; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; unsigned short x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; void*x7; void*x8; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{SecurityOrigin=i{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}SBBB}8 */

- (struct SecurityOrigin { NSInteger x1; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; unsigned short x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; void*x7; void*x8; }*)_core;
     /* Encoded args for previous method: ^{SecurityOrigin=i{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}SBBB}8@0:4 */

- (id)safari_userVisibleName;

@end