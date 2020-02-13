// Code generated by go-swagger; DO NOT EDIT.

package interfaces

// This file was generated by the swagger tool.
// Editing this file might prove futile when you re-run the swagger generate command

import (
	"fmt"
	"io"
	"strconv"

	"github.com/go-openapi/errors"
	"github.com/go-openapi/runtime"
	"github.com/go-openapi/swag"
	"github.com/go-openapi/validate"

	strfmt "github.com/go-openapi/strfmt"

	"github.com/Spirent/openperf/targets/spiperf/openperf/v1/models"
)

// BulkCreateInterfacesReader is a Reader for the BulkCreateInterfaces structure.
type BulkCreateInterfacesReader struct {
	formats strfmt.Registry
}

// ReadResponse reads a server response into the received o.
func (o *BulkCreateInterfacesReader) ReadResponse(response runtime.ClientResponse, consumer runtime.Consumer) (interface{}, error) {
	switch response.Code() {
	case 200:
		result := NewBulkCreateInterfacesOK()
		if err := result.readResponse(response, consumer, o.formats); err != nil {
			return nil, err
		}
		return result, nil

	default:
		return nil, runtime.NewAPIError("unknown error", response, response.Code())
	}
}

// NewBulkCreateInterfacesOK creates a BulkCreateInterfacesOK with default headers values
func NewBulkCreateInterfacesOK() *BulkCreateInterfacesOK {
	return &BulkCreateInterfacesOK{}
}

/*BulkCreateInterfacesOK handles this case with default header values.

Success
*/
type BulkCreateInterfacesOK struct {
	Payload *BulkCreateInterfacesOKBody
}

func (o *BulkCreateInterfacesOK) Error() string {
	return fmt.Sprintf("[POST /interfaces/x/bulk-create][%d] bulkCreateInterfacesOK  %+v", 200, o.Payload)
}

func (o *BulkCreateInterfacesOK) GetPayload() *BulkCreateInterfacesOKBody {
	return o.Payload
}

func (o *BulkCreateInterfacesOK) readResponse(response runtime.ClientResponse, consumer runtime.Consumer, formats strfmt.Registry) error {

	o.Payload = new(BulkCreateInterfacesOKBody)

	// response payload
	if err := consumer.Consume(response.Body(), o.Payload); err != nil && err != io.EOF {
		return err
	}

	return nil
}

/*BulkCreateInterfacesBody BulkCreateInterfacesRequest
//
// Parameters for the bulk create operation
swagger:model BulkCreateInterfacesBody
*/
type BulkCreateInterfacesBody struct {

	// List of network interfaces
	// Required: true
	// Min Items: 1
	Items []*models.Interface `json:"items"`
}

// Validate validates this bulk create interfaces body
func (o *BulkCreateInterfacesBody) Validate(formats strfmt.Registry) error {
	var res []error

	if err := o.validateItems(formats); err != nil {
		res = append(res, err)
	}

	if len(res) > 0 {
		return errors.CompositeValidationError(res...)
	}
	return nil
}

func (o *BulkCreateInterfacesBody) validateItems(formats strfmt.Registry) error {

	if err := validate.Required("create"+"."+"items", "body", o.Items); err != nil {
		return err
	}

	iItemsSize := int64(len(o.Items))

	if err := validate.MinItems("create"+"."+"items", "body", iItemsSize, 1); err != nil {
		return err
	}

	for i := 0; i < len(o.Items); i++ {
		if swag.IsZero(o.Items[i]) { // not required
			continue
		}

		if o.Items[i] != nil {
			if err := o.Items[i].Validate(formats); err != nil {
				if ve, ok := err.(*errors.Validation); ok {
					return ve.ValidateName("create" + "." + "items" + "." + strconv.Itoa(i))
				}
				return err
			}
		}

	}

	return nil
}

// MarshalBinary interface implementation
func (o *BulkCreateInterfacesBody) MarshalBinary() ([]byte, error) {
	if o == nil {
		return nil, nil
	}
	return swag.WriteJSON(o)
}

// UnmarshalBinary interface implementation
func (o *BulkCreateInterfacesBody) UnmarshalBinary(b []byte) error {
	var res BulkCreateInterfacesBody
	if err := swag.ReadJSON(b, &res); err != nil {
		return err
	}
	*o = res
	return nil
}

/*BulkCreateInterfacesOKBody BulkCreateInterfacesResponse
swagger:model BulkCreateInterfacesOKBody
*/
type BulkCreateInterfacesOKBody struct {

	// List of network interfaces
	// Required: true
	// Min Items: 1
	Items []*models.Interface `json:"items"`
}

// Validate validates this bulk create interfaces o k body
func (o *BulkCreateInterfacesOKBody) Validate(formats strfmt.Registry) error {
	var res []error

	if err := o.validateItems(formats); err != nil {
		res = append(res, err)
	}

	if len(res) > 0 {
		return errors.CompositeValidationError(res...)
	}
	return nil
}

func (o *BulkCreateInterfacesOKBody) validateItems(formats strfmt.Registry) error {

	if err := validate.Required("bulkCreateInterfacesOK"+"."+"items", "body", o.Items); err != nil {
		return err
	}

	iItemsSize := int64(len(o.Items))

	if err := validate.MinItems("bulkCreateInterfacesOK"+"."+"items", "body", iItemsSize, 1); err != nil {
		return err
	}

	for i := 0; i < len(o.Items); i++ {
		if swag.IsZero(o.Items[i]) { // not required
			continue
		}

		if o.Items[i] != nil {
			if err := o.Items[i].Validate(formats); err != nil {
				if ve, ok := err.(*errors.Validation); ok {
					return ve.ValidateName("bulkCreateInterfacesOK" + "." + "items" + "." + strconv.Itoa(i))
				}
				return err
			}
		}

	}

	return nil
}

// MarshalBinary interface implementation
func (o *BulkCreateInterfacesOKBody) MarshalBinary() ([]byte, error) {
	if o == nil {
		return nil, nil
	}
	return swag.WriteJSON(o)
}

// UnmarshalBinary interface implementation
func (o *BulkCreateInterfacesOKBody) UnmarshalBinary(b []byte) error {
	var res BulkCreateInterfacesOKBody
	if err := swag.ReadJSON(b, &res); err != nil {
		return err
	}
	*o = res
	return nil
}
