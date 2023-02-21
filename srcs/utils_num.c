void	get_arg_d(t_data *data, va_list args)
{
	int		arg_nb;

	arg_nb = va_arg(args, int);
	
	add_buffer_string(data, ft_itoa(arg_nb))

}
