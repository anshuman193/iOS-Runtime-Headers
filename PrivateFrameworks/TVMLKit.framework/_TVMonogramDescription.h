/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramDescription : NSObject <NSSecureCoding> {
    UIColor * _borderColor;
    float  _borderWidth;
    float  _cornerRadius;
    UIColor * _fillColor;
    NSString * _firstName;
    UIFont * _font;
    BOOL  _hasPlaceholder;
    NSURL * _imageURL;
    NSString * _lastName;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    NSString * _text;
    float  _upscaleAdjustment;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) float borderWidth;
@property (nonatomic) float cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) UIFont *font;
@property (nonatomic) BOOL hasPlaceholder;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) float upscaleAdjustment;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)borderColor;
- (float)borderWidth;
- (float)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)fillColor;
- (id)firstName;
- (id)font;
- (BOOL)hasPlaceholder;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;
- (id)lastName;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setFillColor:(id)arg1;
- (void)setHasPlaceholder:(BOOL)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setUpscaleAdjustment:(float)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)text;
- (float)upscaleAdjustment;

@end
